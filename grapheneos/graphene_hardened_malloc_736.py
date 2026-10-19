"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 736."""

def spec_graphene_hardened_malloc_736() -> dict:
    return {"system": "GrapheneOS", "spec_id": 736, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_736():
    s = spec_graphene_hardened_malloc_736()
    assert s["spec_id"] == 736
