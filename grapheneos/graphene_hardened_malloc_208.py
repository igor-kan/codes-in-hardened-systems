"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 208."""

def spec_graphene_hardened_malloc_208() -> dict:
    return {"system": "GrapheneOS", "spec_id": 208, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_208():
    s = spec_graphene_hardened_malloc_208()
    assert s["spec_id"] == 208
