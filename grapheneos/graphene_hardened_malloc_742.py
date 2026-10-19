"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 742."""

def spec_graphene_hardened_malloc_742() -> dict:
    return {"system": "GrapheneOS", "spec_id": 742, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_742():
    s = spec_graphene_hardened_malloc_742()
    assert s["spec_id"] == 742
